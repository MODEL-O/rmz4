// undefined FUN_080d1cbc(void)
// entry 0x80d1cbc


undefined4 FUN_080d1cbc(int *param_1,char param_2)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  if (param_2 == '\0') {
    local_10 = *param_1;
    iVar2 = DAT_080d1d04;
  }
  else {
    local_10 = *param_1;
    iVar2 = 0x1000;
  }
  local_10 = local_10 + iVar2;
  local_c = param_1[1] + 0x300;
  sVar1 = FUN_08007c7c(local_10);
  if (sVar1 != 0) {
    FUN_080d1bcc(&local_10,7,param_2);
  }
  return in_lr;
}


