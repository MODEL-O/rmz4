// undefined FUN_0802869c(void)
// entry 0x802869c


undefined8 FUN_0802869c(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0xc);
  uVar3 = *(uint *)(iVar6 + 4);
  if ((uVar3 & 2) == 0) {
    iVar5 = (uint)*(byte *)(iVar6 + 1) * 0x10;
    if (*(int *)(param_1 + 0x10 + iVar5) != 0) {
      if (uVar3 == 4) {
        if (((ushort)*(byte *)(param_1 + iVar5 + 0x19) & *(ushort *)(iVar6 + 2)) == 0)
        goto LAB_08028742;
        goto LAB_08028748;
      }
      if (uVar3 == 0) {
        bVar1 = *(byte *)(param_1 + iVar5 + 0x19) & ~*(byte *)(iVar6 + 2);
      }
      else {
        bVar1 = *(byte *)(param_1 + iVar5 + 0x19) | *(byte *)(iVar6 + 2);
      }
      *(byte *)(param_1 + iVar5 + 0x19) = bVar1;
    }
  }
  else if ((uVar3 & 4) == 0) {
    if ((uVar3 & 1) == 0) {
      pbVar4 = (byte *)(((int)((uint)*(ushort *)(iVar6 + 2) << 0x10) >> 0x13) + DAT_0802871c + 4);
      bVar1 = *pbVar4 & ~(byte)(1 << (*(ushort *)(iVar6 + 2) & 7));
    }
    else {
      pbVar4 = (byte *)(((int)((uint)*(ushort *)(iVar6 + 2) << 0x10) >> 0x13) + DAT_080286fc + 4);
      bVar1 = (byte)(1 << (*(ushort *)(iVar6 + 2) & 7)) | *pbVar4;
    }
    *pbVar4 = bVar1;
  }
  else if (((int)(uint)*(byte *)(((int)((uint)*(ushort *)(iVar6 + 2) << 0x10) >> 0x13) +
                                DAT_080286d4 + 4) >> (*(ushort *)(iVar6 + 2) & 7) & 1U) == 0) {
LAB_08028742:
    *(int *)(param_1 + 0xc) = iVar6 + -8;
LAB_08028748:
    uVar2 = 1;
    goto LAB_08028766;
  }
  uVar2 = 0;
LAB_08028766:
  return CONCAT44(in_lr,uVar2);
}


