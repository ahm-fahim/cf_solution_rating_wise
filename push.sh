while ture; do
    git add .
    timestamp=$(date +%Y-%m-%d-%H-%M-%S)
    git commit -m "Auto-commit at $timestamp"
    git push
    sleep 100
done