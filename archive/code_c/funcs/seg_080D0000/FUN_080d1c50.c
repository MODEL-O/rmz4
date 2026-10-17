// undefined FUN_080d1c50(void)
// entry 0x80d1c50


undefined4 FUN_080d1c50(int *param_1,char param_2)

{
  int iVar1;
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  if (param_2 == '\0') {
    local_10 = *param_1;
    iVar1 = DAT_080d1cb8;
  }
  else {
    local_10 = *param_1;
    iVar1 = 0x2200;
  }
  local_10 = local_10 + iVar1;
  local_c = param_1[1];
  FUN_080d1bcc(&local_10,3,0);
  FUN_080d1bcc(&local_10,3,1);
  FUN_080d1bcc(&local_10,4,param_2);
  FUN_080d1bcc(&local_10,4,param_2);
  FUN_080d1bcc(&local_10,5,param_2);
  FUN_080d1bcc(&local_10,5,param_2);
  return in_lr;
}


