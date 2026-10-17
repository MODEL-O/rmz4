// undefined FUN_080190fc(void)
// entry 0x80190fc


undefined4 FUN_080190fc(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  iVar3 = DAT_0801917c;
  piVar2 = DAT_08019178;
  piVar1 = DAT_08019134;
  pbVar4 = (byte *)(DAT_0801912c + DAT_08019130);
  if (*pbVar4 != 0) {
    if (*pbVar4 < 7) {
      FUN_08001ea4(*DAT_08019178 + (uint)*pbVar4 * 0x14 + DAT_0801917c,0x4000);
      FUN_08002208(*piVar2 + (uint)*pbVar4 * 0x14 + iVar3 + 0xc,0);
    }
    else {
      FUN_08001ea4(*DAT_08019134 + DAT_08019138,0x4000);
      FUN_08002208(*piVar1 + DAT_0801913c,0);
    }
  }
  return in_lr;
}


