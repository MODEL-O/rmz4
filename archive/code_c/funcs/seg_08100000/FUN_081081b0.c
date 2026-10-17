// undefined FUN_081081b0(void)
// entry 0x81081b0


undefined4 FUN_081081b0(undefined4 *param_1,undefined1 param_2,byte param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_08108220);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 0x1e;
    iVar1 = DAT_08108224;
    *(undefined1 *)(iVar2 + 9) = 0x52;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x148);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
    *(undefined1 *)(iVar2 + 0x1d) = *(undefined1 *)(iVar2 + 0x1c);
    uVar3 = param_1[1];
    *(undefined4 *)(iVar2 + 0x54) = *param_1;
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    *(undefined1 *)(iVar2 + 0x10) = param_2;
    *(byte *)(iVar2 + 0x11) = param_3;
    if (param_3 < 4) {
      FUN_081081b0(param_1,param_2,param_3 + 1);
    }
  }
  return in_lr;
}


