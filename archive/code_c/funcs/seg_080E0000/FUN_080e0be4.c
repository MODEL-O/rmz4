// undefined FUN_080e0be4(void)
// entry 0x80e0be4


undefined4 FUN_080e0be4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  uVar4 = *(byte *)(param_1 + 0x11) - 2 & 0xff;
  FUN_0801cf00(param_1,*(undefined2 *)(uVar4 * 2 + DAT_080e0c3c));
  iVar1 = DAT_080e0c40;
  iVar3 = uVar4 * 8;
  iVar5 = *(int *)(iVar3 + DAT_080e0c40);
  *(int *)(param_1 + 0x5c) = iVar5 << 8;
  *(int *)(param_1 + 0x60) = *(int *)(iVar3 + iVar1 + 4) << 8;
  iVar2 = DAT_080e0c74;
  iVar1 = DAT_080e0c44;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(iVar3 + DAT_080e0c74) * 0x100;
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(iVar3 + DAT_080e0c44) * -0x100;
    iVar5 = iVar5 * -0x10000;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar5 >> 8;
    iVar2 = iVar1;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(uVar4 * 8 + iVar2 + 4) * 0x100;
  *(undefined1 *)(param_1 + 0x74) = 0;
  return in_lr;
}


