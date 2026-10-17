// undefined FUN_081037a8(void)
// entry 0x81037a8


undefined4 FUN_081037a8(int param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    iVar4 = *(int *)(param_1 + 0x2c);
    if ((*(uint *)(param_1 + 0x14) & 0x20000) != 0) {
      *(undefined1 *)(iVar4 + 0xb4) = 1;
      FUN_08002b10(0x188);
      iVar2 = DAT_08103824;
      bVar1 = *(byte *)((uint)*(byte *)(iVar4 + 0x11) + DAT_08103824);
      pbVar3 = (byte *)((uint)(bVar1 >> 3) + DAT_08103820 + 4);
      *pbVar3 = (byte)(1 << (bVar1 & 7)) | *pbVar3;
      bVar1 = *(byte *)((uint)*(byte *)(iVar4 + 0x11) + iVar2);
      pbVar3 = (byte *)((uint)(bVar1 >> 3) + DAT_08103828);
      *pbVar3 = (byte)(1 << (bVar1 & 7)) | *pbVar3;
      if (*DAT_0810382c != 0) {
        FUN_0803a578(*DAT_0810382c,8,0x11);
      }
    }
  }
  return in_lr;
}


