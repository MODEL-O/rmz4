// undefined FUN_080ce96c(void)
// entry 0x80ce96c


undefined4 FUN_080ce96c(int param_1)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x2c);
  if ((*(char *)(*(int *)(*(int *)(param_1 + 0xc) + 0x2c) + 8) == '\x01') &&
     ((*(uint *)(iVar5 + 0x8c) & 0x100) != 0)) {
    *(undefined4 *)(iVar5 + 0x5c) = 0x200;
    *(byte *)(iVar5 + 10) = *(byte *)(iVar5 + 10) | 0x10;
    *(byte *)(iVar5 + 0x4c) = 1;
    pbVar4 = (byte *)(iVar5 + 0x4a);
    *pbVar4 = *pbVar4 & 0xef | 0x10;
    if (*(int *)(iVar5 + 0x54) < *(int *)(*DAT_080ce9e8 + 0x54)) {
      iVar2 = *(int *)(iVar5 + 0x5c) * -0x100;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xff;
      }
      *(int *)(iVar5 + 0x5c) = iVar2 >> 8;
      bVar1 = *(byte *)(iVar5 + 10);
      bVar3 = ~(bVar1 >> 4) & 1;
      if (bVar3 == 0) {
        bVar1 = bVar1 & 0xef;
      }
      else {
        bVar1 = bVar1 | 0x10;
      }
      *(byte *)(iVar5 + 10) = bVar1;
      *(byte *)(iVar5 + 0x4c) = bVar3;
      *pbVar4 = *pbVar4 & 0xef | bVar3 << 4;
    }
    if (*(char *)(iVar5 + 0xb9) == '\x01') {
      *(undefined4 *)(iVar5 + 0x60) = DAT_080cea3c;
      *(char *)(iVar5 + 0xb9) = '\0';
    }
    FUN_08002b10(0x16c);
    *(int *)(iVar5 + 0x54) = *(int *)(iVar5 + 0x54) + *(int *)(iVar5 + 0x5c);
    *(undefined1 *)(iVar5 + 0xba) = 1;
    *(undefined1 *)(iVar5 + 0x12) = 0x14;
  }
  return in_lr;
}


