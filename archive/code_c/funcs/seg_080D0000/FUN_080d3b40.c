// undefined FUN_080d3b40(void)
// entry 0x80d3b40


undefined8 FUN_080d3b40(int param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080d3b8c);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 1;
    iVar1 = DAT_080d3b90;
    *(undefined1 *)(iVar2 + 9) = 0xc;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x30);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(int *)(iVar2 + 0x28) = param_1;
    if (param_2 == 0) {
      *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xdf;
    }
    else {
      *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) | 0x20;
    }
    *(byte *)(iVar2 + 0x4d) = param_2 & 1;
    *(byte *)(iVar2 + 0x4a) = *(byte *)(iVar2 + 0x4a) & 0xdf | (param_2 & 1) << 5;
    *(undefined1 *)(iVar2 + 0x10) = 0;
    *(undefined1 *)(iVar2 + 0x11) = 0;
    *(byte *)(param_1 + 0x142) = *(byte *)(param_1 + 0x142) | 4;
  }
  return CONCAT44(in_lr,iVar2);
}


