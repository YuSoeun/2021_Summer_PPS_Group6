s = input();

s = s.replace("c=", "a");
s = s.replace("c-", "a");
s = s.replace("dz=", "a");
s = s.replace("đ-", "a");
s = s.replace("lj", "a");
s = s.replace("nj", "a");
s = s.replace("s=", "a");
s = s.replace("z=", "a");

s = s.replace("=", "");
s = s.replace("-", "");

print(len(s));