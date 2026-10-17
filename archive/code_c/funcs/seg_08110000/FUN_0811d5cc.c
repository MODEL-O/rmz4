// undefined FUN_0811d5cc(void)
// entry 0x811d5cc


undefined8 FUN_0811d5cc(int param_1,byte param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 in_lr;
  
  if (param_2 != 0xff) {
    uVar5 = 0;
    do {
      pbVar4 = (byte *)(param_1 + DAT_0811d628 + uVar5);
      if (*pbVar4 == 0xff) {
        *pbVar4 = param_2;
        pbVar4 = (byte *)(*DAT_0811d604 + (uint)(param_2 >> 1));
        bVar1 = *pbVar4;
        iVar3 = (param_2 & 1) << 2;
        *pbVar4 = (byte)(((int)(uint)bVar1 >> iVar3 & 0xfU) - 1 << iVar3) |
                  bVar1 & ~(byte)(0xf << iVar3);
        uVar2 = 1;
        goto LAB_0811d622;
      }
      uVar5 = uVar5 + 1 & 0xff;
    } while (uVar5 < 4);
  }
  uVar2 = 0;
LAB_0811d622:
  return CONCAT44(in_lr,uVar2);
}


