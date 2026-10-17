// undefined FUN_0810d194(void)
// entry 0x810d194


undefined4 FUN_0810d194(int param_1)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28) + DAT_0810d1dc;
  if (*(char *)(iVar4 + 5) == '\0') {
    if (*(char *)(param_1 + 0x80) != '\0') {
      FUN_080025d8();
    }
    if (*(char *)(iVar4 + 0x12) == '\x03') {
      *(undefined1 *)(param_1 + 0xd) = 3;
    }
    if (*(ushort *)(param_1 + 0x78) == DAT_0810d1e0) {
      bVar1 = *(byte *)(param_1 + 0x12);
      *(byte *)(param_1 + 0x12) = bVar1 + 1;
      if ((bVar1 & 3) == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xfe;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 1;
      }
      *(byte *)(param_1 + 10) = bVar1;
    }
    FUN_0801cff0(param_1);
    bVar1 = *(byte *)(param_1 + 0xd);
    if (bVar1 == 1) {
      *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) & 0xf3;
    }
    else if (bVar1 < 2) {
      if (bVar1 == 0) {
        *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) & 0xf3 | 4;
        pbVar3 = (byte *)(param_1 + 0x7c);
        bVar1 = *pbVar3;
        *pbVar3 = bVar1 + 2;
        if (0xf < (byte)(bVar1 + 2)) {
          *pbVar3 = 0x10;
          *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
        }
      }
    }
    else if (bVar1 == 2) {
      *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) & 0xf3 | 4;
      *(undefined1 *)(param_1 + 0x7c) = 8;
    }
    else if (bVar1 == 3) goto LAB_0810d272;
    *(ushort *)(DAT_0810d2ac + 2) =
         *(byte *)(param_1 + 0x7c) & 0x1f | (0x10 - (ushort)*(byte *)(param_1 + 0x7c)) * 0x100;
  }
  else {
LAB_0810d272:
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0810d28c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    FUN_0810d2b0(param_1);
  }
  return in_lr;
}


