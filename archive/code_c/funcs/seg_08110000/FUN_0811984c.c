// undefined FUN_0811984c(void)
// entry 0x811984c


undefined4 FUN_0811984c(int param_1)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  iVar3 = param_1 + DAT_08119868;
  pbVar4 = (byte *)(param_1 + DAT_0811986c);
  if (*pbVar4 == 0) {
    *(undefined1 *)(iVar3 + 1) = 0;
    *pbVar4 = *pbVar4 + 1;
    return in_lr;
  }
  *(undefined1 *)(param_1 + DAT_081198c8) = 1;
  bVar2 = *(byte *)(DAT_081198cc + 4) & 0x20;
  if ((*(byte *)(DAT_081198cc + 4) & 0x20) == 0) {
    if (*(char *)(iVar3 + 1) == '\0') {
      FUN_08002b10(4);
      *(char *)(iVar3 + 1) = *(char *)(iVar3 + 1) + '\x01';
      return in_lr;
    }
    if (*(short *)(DAT_08119920 + 4) == 0) {
      FUN_0810d85c((uint)*(ushort *)(DAT_0811993c + 0xd4) + DAT_08119940,1,0x10);
      return in_lr;
    }
    *(byte *)(param_1 + 3) = bVar2;
    *pbVar4 = bVar2;
  }
  else {
    FUN_0810d85c((uint)*(ushort *)(DAT_081198d0 + 0xd2) + DAT_081198d4,1,0x10);
    uVar1 = *(ushort *)(DAT_081198d8 + 4);
    bVar2 = (byte)uVar1 & 1;
    if ((uVar1 & 1) != 0) {
      FUN_08002b10(2);
      *(ushort *)(DAT_081198dc + 8) = (ushort)DAT_081198e0 & *(ushort *)(DAT_081198dc + 8) | 0x20;
      *(undefined1 *)(param_1 + 1) = 3;
      *(undefined1 *)(param_1 + 2) = 3;
      *(undefined1 *)(param_1 + 3) = 0;
      *pbVar4 = 0;
      return in_lr;
    }
    if ((uVar1 & 2) == 0) {
      return in_lr;
    }
    FUN_08002b10(3);
    *(byte *)(param_1 + 3) = bVar2;
    *pbVar4 = bVar2;
  }
  FUN_08118a54(param_1);
  return in_lr;
}


