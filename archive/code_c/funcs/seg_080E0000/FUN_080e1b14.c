// undefined FUN_080e1b14(void)
// entry 0x80e1b14


undefined4 FUN_080e1b14(undefined4 *param_1,uint param_2,short param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080e1b8c);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 1;
    iVar1 = DAT_080e1b90;
    *(undefined1 *)(iVar2 + 9) = 0x3e;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0xf8);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    uVar3 = param_1[1];
    *(undefined4 *)(iVar2 + 0x54) = *param_1;
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    iVar1 = DAT_080e1b94;
    *(int *)(iVar2 + 0x5c) =
         (int)param_3 * (int)*(short *)(((param_2 & 0xff) + 0x40 & 0xff) * 2 + DAT_080e1b94) >> 8;
    *(int *)(iVar2 + 0x60) = (int)param_3 * (int)*(short *)((param_2 & 0xff) * 2 + iVar1) >> 8;
    *(undefined1 *)(iVar2 + 0x10) = 0;
    *(undefined1 *)(iVar2 + 0x11) = 0;
  }
  return in_lr;
}


