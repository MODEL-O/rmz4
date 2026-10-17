// undefined FUN_0811d6c0(void)
// entry 0x811d6c0


undefined8 FUN_0811d6c0(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 in_lr;
  
  uVar6 = 0;
  do {
    pbVar5 = (byte *)(DAT_0811d710 + param_1 + uVar6);
    bVar1 = *pbVar5;
    if (bVar1 != 0xff) {
      pbVar4 = (byte *)(*DAT_0811d714 + (uint)(bVar1 >> 1));
      bVar2 = *pbVar4;
      iVar3 = (bVar1 & 1) << 2;
      *pbVar4 = (byte)(((int)(uint)bVar2 >> iVar3 & 0xfU) + 1 << iVar3) |
                bVar2 & ~(byte)(0xf << iVar3);
      *pbVar5 = 0xff;
    }
    uVar6 = uVar6 + 1 & 0xff;
  } while (uVar6 < 4);
  return CONCAT44(in_lr,1);
}


