// undefined FUN_080b0124(void)
// entry 0x80b0124


undefined4 FUN_080b0124(int param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  iVar2 = DAT_080b01b8;
  iVar4 = DAT_080b01b4;
  puVar1 = DAT_080b01b0;
  if ((*(int *)(param_1 + 0x28) == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    if ((*(char *)(param_1 + 0x11) == '\0') && ((*(byte *)(param_1 + 0x97) & 0xf0) == 0x20)) {
      uVar3 = *(undefined4 *)(param_1 + 0x54);
      uVar5 = *DAT_080b01b0 * DAT_080b01b4 + DAT_080b01b8;
      *DAT_080b01b0 = uVar5 & 0x7fffffff;
      FUN_080d0ff4(uVar3,*(int *)(param_1 + 0x58) + ((uVar5 & 0x7fffffff) >> 0x10 & 0xf) * 0x100,1);
      FUN_080d0ff4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x500,1);
      uVar5 = *puVar1 * iVar4 + iVar2;
      *puVar1 = uVar5 & 0x7fffffff;
      FUN_080d0ff4(*(int *)(param_1 + 0x54) + ((uVar5 & 0x7fffffff) >> 0x10 & 0xf) * 0x100,
                   *(undefined4 *)(param_1 + 0x58),0);
    }
    else {
      iVar4 = FUN_0802adac(0,param_1,DAT_080b01f0);
      *(int *)(param_1 + 0x28) = iVar4;
      if (iVar4 != 0) {
        FUN_08005784(param_1 + 0x74,DAT_080b01f4);
        FUN_0801cf00(param_1,DAT_080b01f8);
        FUN_0801cf00(*(undefined4 *)(param_1 + 0x2c),DAT_080b01fc);
      }
    }
  }
  return in_lr;
}


