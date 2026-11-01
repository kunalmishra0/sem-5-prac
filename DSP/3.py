from abc import ABC, abstractmethod

# --- 1. DATA ABSTRACTION ---
class BankAccount(ABC):
    """Abstract base class establishing the contract without showing implementation."""
    
    @abstractmethod
    def deposit(self, amount: float) -> None:
        pass

    @abstractmethod
    def withdraw(self, amount: float) -> None:
        pass


# --- 2. DATA HIDING & INHERITANCE ---
class SavingsAccount(BankAccount):
    def __init__(self, owner: str, initial_balance: float):
        self.owner = owner
        # Double underscore (__ prefix) hides the attribute via name mangling
        self.__balance = initial_balance 

    # Public method to interact with hidden data (Abstraction in action)
    def deposit(self, amount: float) -> None:
        if amount > 0:
            self.__balance += amount
            print(f"Deposited ${amount:.2f}.")
        else:
            print("Deposit amount must be positive.")

    def withdraw(self, amount: float) -> None:
        if 0 < amount <= self.__balance:
            self.__balance -= amount
            print(f"Withdrew ${amount:.2f}.")
        else:
            print("Invalid withdrawal amount or insufficient funds.")

    # Getter method providing controlled access to hidden data
    def get_balance(self) -> float:
        return self.__balance


# --- DEMONSTRATION ---

account = SavingsAccount("Alice", 1000.00)

# Utilizing Abstraction
account.deposit(500)
account.withdraw(200)
print(f"Current Balance: ${account.get_balance():.2f}")

# Data Hiding Test: Direct access fails or raises AttributeError
try:
    print(account.__balance)
except AttributeError:
    print("\nDirect access to '__balance' failed! The attribute is hidden.")
