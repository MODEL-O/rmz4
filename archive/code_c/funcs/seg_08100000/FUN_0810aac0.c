// undefined FUN_0810aac0(void)
// entry 0x810aac0


undefined4 FUN_0810aac0(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0x28) + DAT_0810ab18);
  FUN_0801cf00(param_1,DAT_0810ab1c);
  uVar3 = 0;
  uVar2 = 0;
  if (*(byte *)(param_1 + 0x11) != 0) {
    do {
      if (*(char *)(iVar4 + 0xbc + uVar2) != -1) {
        uVar3 = uVar3 + 1 & 0xff;
      }
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < *(byte *)(param_1 + 0x11));
  }
  *(uint *)(param_1 + 0x54) = uVar3 * 0x1800 + 0x8000;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0x6000;
  }
  else {
    uVar1 = 0x5800;
  }
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  return in_lr;
}


