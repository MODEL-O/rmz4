// undefined FUN_080e8840(void)
// entry 0x80e8840


undefined4 FUN_080e8840(undefined4 *param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar1 = FUN_08005500(*DAT_080e88d0);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0x25) = 1;
    iVar4 = DAT_080e88d4;
    *(undefined1 *)(iVar1 + 9) = 0x59;
    *(undefined4 *)(iVar1 + 0x14) = **(undefined4 **)(iVar4 + 0x164);
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined1 *)(iVar1 + 0x22) = 0;
    uVar2 = param_1[1];
    *(undefined4 *)(iVar1 + 0x54) = *param_1;
    *(undefined4 *)(iVar1 + 0x58) = uVar2;
    *(undefined1 *)(iVar1 + 0x10) = 0;
    *(undefined1 *)(iVar1 + 0x11) = 0;
    iVar4 = DAT_080e88d8;
    iVar3 = (int)((param_3 & 0xffff) *
                 (int)*(short *)(((param_2 & 0xff) + 0x40 & 0xff) * 2 + DAT_080e88d8)) >> 8;
    *(int *)(iVar1 + 0x5c) = iVar3;
    iVar4 = (int)((param_3 & 0xffff) * (int)*(short *)((param_2 & 0xff) * 2 + iVar4)) >> 8;
    *(int *)(iVar1 + 0x60) = iVar4;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    *(int *)(iVar1 + 100) = iVar3 >> 4;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xf;
    }
    *(int *)(iVar1 + 0x68) = iVar4 >> 4;
  }
  return in_lr;
}


