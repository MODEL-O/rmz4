// undefined FUN_080acc04(void)
// entry 0x80acc04


undefined8 FUN_080acc04(int param_1,byte param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = FUN_08005500(*DAT_080acc88);
  if (iVar3 != 0) {
    *(undefined1 *)(iVar3 + 0x25) = 0x18;
    iVar2 = DAT_080acc8c;
    *(undefined1 *)(iVar3 + 9) = 0x4c;
    *(undefined4 *)(iVar3 + 0x14) = **(undefined4 **)(iVar2 + 0x130);
    *(undefined2 *)(iVar3 + 0x20) = 0;
    *(undefined1 *)(iVar3 + 0x22) = 0;
    *(byte *)(iVar3 + 0xb) = *(byte *)(iVar3 + 0xb) | 0x10;
    *(undefined1 *)(iVar3 + 0x1d) = *(undefined1 *)(iVar3 + 0x1c);
    *(int *)(iVar3 + 0x28) = param_1;
    *(undefined1 *)(iVar3 + 0x10) = 1;
    *(byte *)(iVar3 + 0x11) = param_2;
    bVar1 = (byte)(1 << (uint)param_2);
    *(byte *)(param_1 + 0xb4) = bVar1 | *(byte *)(param_1 + 0xb4);
    *(byte *)(param_1 + 0xb5) = bVar1 | *(byte *)(param_1 + 0xb5);
    *(byte *)(param_1 + 0xba) = ~bVar1 & *(byte *)(param_1 + 0xba);
    *(byte *)(param_1 + 0xbb) = ~bVar1 & *(byte *)(param_1 + 0xbb);
  }
  return CONCAT44(in_lr,iVar3);
}


