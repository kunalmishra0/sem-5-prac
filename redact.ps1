Get-ChildItem -Path . -Recurse -Include *.cpp,*.c,*.h,*.py,*.R,*.txt,*.csv,*.json,*.ipynb,*.md | ForEach-Object {
    $path = $_.FullName
    $content = Get-Content -Raw -Path $path -ErrorAction SilentlyContinue
    if ($null -eq $content) { return }
    $new = $content -replace 'Kunal Mishra', '[REDACTED]' -replace 'Manya Chawla', '[REDACTED]' -replace '1/24/SET/BCS/446', '[REDACTED]' -replace '\b446\b', '[REDACTED]' -replace '\b585\b', '[REDACTED]'
    if ($new -ne $content) {
        Set-Content -Path $path -Value $new -Force
        Write-Host "Redacted: $path"
    }
}
