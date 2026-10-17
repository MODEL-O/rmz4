// undefined FUN_0803ad84(void)
// entry 0x803ad84


undefined8 FUN_0803ad84(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  int local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  
  if (param_2 != '\0') {
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    local_20 = *(int *)(param_1 + 0x54);
    iVar2 = DAT_0803ae00;
  }
  else {
    local_20 = *(int *)(param_1 + 0x54);
    iVar2 = 0x3000;
  }
  local_20 = local_20 + iVar2;
  local_1c = *(undefined4 *)(param_1 + 0x58);
  iVar2 = FUN_0803a92c(&local_20);
  if ((iVar2 == 0) ||
     (cVar1 = FUN_08128f84(iVar2,&local_18,
                           *(undefined4 *)((uint)*(byte *)(iVar2 + 9) * 4 + DAT_0803ae04)),
     cVar1 == '\0')) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar3 = 0x80;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = FUN_0810d338(local_18 - *(int *)(param_1 + 0x54),local_14 - *(int *)(param_1 + 0x58));
    uVar3 = uVar3 & 0xff;
    if (param_2 != '\0') {
      *(int *)(param_1 + 100) = local_18;
      *(int *)(param_1 + 0x68) = local_14;
    }
  }
  return CONCAT44(in_lr,uVar3);
}


