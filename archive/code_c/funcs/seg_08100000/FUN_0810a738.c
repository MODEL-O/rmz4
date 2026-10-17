// undefined FUN_0810a738(void)
// entry 0x810a738


undefined4 FUN_0810a738(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x28) + DAT_0810a758);
  if (*(char *)(param_1 + 0x11) == '\0') {
    bVar1 = *(byte *)(iVar3 + 0xc0);
    uVar2 = 0x3800;
    *(undefined4 *)(param_1 + 0x54) = 0x3800;
  }
  else {
    bVar1 = *(byte *)(iVar3 + 0xc1);
    *(undefined4 *)(param_1 + 0x54) = 0x3800;
    uVar2 = 0x6000;
  }
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  uVar2 = DAT_0810a78c;
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        uVar2 = 0x3400;
        goto LAB_0810a7a2;
      }
    }
    else {
      uVar2 = DAT_0810a794;
      if (bVar1 == 2) goto LAB_0810a7a2;
    }
    uVar2 = DAT_0810a7ac;
    if (*(byte *)(iVar3 + 0xe6) != 0xff) {
      FUN_0801cf00(param_1,DAT_0810a7c4 + (uint)*(byte *)(iVar3 + 0xe6));
      return in_lr;
    }
  }
LAB_0810a7a2:
  FUN_0801cf00(param_1,uVar2);
  return in_lr;
}


