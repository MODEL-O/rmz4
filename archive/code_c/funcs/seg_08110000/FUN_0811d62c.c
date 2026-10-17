// undefined FUN_0811d62c(void)
// entry 0x811d62c


undefined8 FUN_0811d62c(int param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 in_lr;
  
  param_2 = param_2 & 0xff;
  iVar7 = param_1 + DAT_0811d654;
  iVar3 = DAT_0811d654 + 0xd + param_1;
  if (*(byte *)(iVar3 + param_2) == 0xff) {
    uVar4 = 0;
  }
  else {
    bVar1 = *(byte *)(iVar3 + param_2);
    pbVar6 = (byte *)(*DAT_0811d6b8 + (uint)(bVar1 >> 1));
    bVar2 = *pbVar6;
    iVar5 = (bVar1 & 1) << 2;
    *pbVar6 = (byte)(((int)(uint)bVar2 >> iVar5 & 0xfU) + 1 << iVar5) |
              bVar2 & ~(byte)(0xf << iVar5);
    if ((uint)bVar1 < (uint)*(byte *)(iVar7 + 6)) {
      *(char *)(iVar7 + 0x16) = *(char *)(iVar7 + 0x16) + '\x01';
    }
    for (; param_2 < 3; param_2 = param_2 + 1 & 0xff) {
      *(undefined1 *)(iVar3 + param_2) = *(undefined1 *)(iVar3 + param_2 + 1);
    }
    *(undefined1 *)(param_1 + DAT_0811d6bc + 0x10) = 0xff;
    uVar4 = 1;
  }
  return CONCAT44(in_lr,uVar4);
}


