// undefined FUN_080e1a38(void)
// entry 0x80e1a38


undefined4 FUN_080e1a38(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  uVar1 = DAT_080e1abc * *DAT_080e1ab8 + DAT_080e1ac0;
  uVar2 = DAT_080e1abc * (uVar1 & 0x7fffffff) + DAT_080e1ac0;
  *DAT_080e1ab8 = uVar2 & 0x7fffffff;
  iVar4 = DAT_080e1ac4;
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x54) + *(int *)((uint)*(byte *)(param_1 + 0x11) * 8 + DAT_080e1ac4);
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x58) + *(int *)((uint)*(byte *)(param_1 + 0x11) * 8 + iVar4 + 4);
  iVar3 = DAT_080e1b0c;
  iVar4 = DAT_080e1ac8;
  if (*(byte *)(param_1 + 0x11) < 2) {
    *(undefined4 *)(param_1 + 0x5c) =
         *(undefined4 *)((uint)*(byte *)(param_1 + 0x11) * 8 + DAT_080e1b0c);
    iVar4 = *(int *)((uint)*(byte *)(param_1 + 0x11) * 8 + iVar3 + 4);
  }
  else {
    iVar5 = (uint)*(byte *)(param_1 + 0x11) * 8;
    iVar3 = (((uVar1 & 0x7fffffff) >> 0x10 & 0xff) + 0x100) * *(int *)(iVar5 + DAT_080e1ac8);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar3 >> 8;
    iVar4 = (((uVar2 & 0x1ffffff) >> 0x10) + 0x180) * *(int *)(iVar5 + iVar4 + 4);
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    iVar4 = iVar4 >> 8;
  }
  *(int *)(param_1 + 0x60) = iVar4;
  if ((*(char *)(param_1 + 0x11) == '\x01') &&
     (*(int *)(param_1 + 0x54) < *(int *)(*DAT_080e1b10 + 0x54))) {
    iVar4 = *(int *)(param_1 + 0x5c) * -0x100;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar4 >> 8;
  }
  return in_lr;
}


