// undefined FUN_080c9798(void)
// entry 0x80c9798


undefined4 FUN_080c9798(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 4) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
    if (*(char *)(iVar1 + 8) == '\0') {
      uVar2 = 0x800;
      if (*(int *)(iVar1 + 0x54) < *(int *)(*(int *)(param_1 + 0x2c) + 0x54)) {
        uVar2 = DAT_080c97fc;
      }
      *(byte *)(iVar1 + 0x142) = *(byte *)(iVar1 + 0x142) | 0x40;
      *(undefined1 *)(iVar1 + 0xd) = 4;
      *(undefined1 *)(iVar1 + 0xe) = 0;
      *(undefined4 *)(iVar1 + 0x128) = uVar2;
      *(undefined4 *)(iVar1 + 300) = DAT_080c9800;
      *(undefined4 *)(iVar1 + 0x130) = 0;
      *(undefined4 *)(iVar1 + 0x134) = 0x40;
      *(undefined2 *)(iVar1 + 0x138) = 0x12;
    }
  }
  return in_lr;
}


