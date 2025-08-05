# 3日ごとに残業

days = 0
total = 0

while total<1000:
    total += 12
    days += 1
    if days%3 == 0: total += 6

print(f"一日12羽折り、3日に一度残業してさらに6羽折ると、\n{days}日で1000羽に達します")