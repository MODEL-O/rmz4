// undefined FUN_080d25d8(void)
// entry 0x80d25d8


undefined4 FUN_080d25d8(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 in_lr;
  
  FUN_0801cff0();
  if (*(byte *)(param_1 + 0x12) < 0x1e) {
    if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
    *(byte *)(param_1 + 10) = bVar1;
  }
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x54) +
       ((int)((uint)*(ushort *)
                     (((uint)*(byte *)(param_1 + 0x12) * 0x10000000 + 0x40000000 >> 0x17) +
                     DAT_080d2650) << 0x10) >> 0x12);
  iVar2 = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar2;
  iVar2 = iVar2 + DAT_080d2654;
  uVar4 = *(byte *)(param_1 + 0x12) - 1;
  *(char *)(param_1 + 0x12) = (char)uVar4;
  if (((uVar4 & 0xff) == 0xff) || (iVar2 < *(int *)(param_1 + 0x74))) {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d2658);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
  }
  return in_lr;
}


