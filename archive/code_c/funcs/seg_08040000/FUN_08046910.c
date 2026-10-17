// undefined FUN_08046910(void)
// entry 0x8046910


undefined4 FUN_08046910(int param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  iVar4 = FUN_08005500(*DAT_0804695c);
  iVar2 = DAT_080469b0;
  iVar1 = DAT_08046960;
  if (iVar4 != 0) {
    if (*(char *)(param_1 + 0xf8) == '\x02') {
      *(undefined1 *)(iVar4 + 9) = 0x19;
      *(undefined4 *)(iVar4 + 0x14) = **(undefined4 **)(iVar1 + 100);
      *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) & 0xbf;
      *(undefined1 *)(iVar4 + 0x25) = 0x10;
      *(undefined2 *)(iVar4 + 0x20) = *DAT_08046964;
      uVar3 = *DAT_08046968;
    }
    else {
      *(undefined1 *)(iVar4 + 9) = 0x19;
      *(undefined4 *)(iVar4 + 0x14) = **(undefined4 **)(iVar2 + 100);
      *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) & 0xbf;
      *(undefined1 *)(iVar4 + 0x25) = 0x10;
      *(undefined2 *)(iVar4 + 0x20) = *(undefined2 *)(DAT_080469b4 + 2);
      uVar3 = *(undefined1 *)(DAT_080469b8 + 1);
    }
    *(undefined1 *)(iVar4 + 0x22) = uVar3;
    *(int *)(iVar4 + 0x28) = param_1;
    *(int *)(iVar4 + 0x2c) = param_2;
    uVar5 = *(undefined4 *)(param_2 + 0x58);
    *(undefined4 *)(iVar4 + 0x54) = *(undefined4 *)(param_2 + 0x54);
    *(undefined4 *)(iVar4 + 0x58) = uVar5;
    *(undefined1 *)(iVar4 + 0x10) = param_3;
    *(undefined1 *)(iVar4 + 0x11) = 0;
  }
  return in_lr;
}


