// undefined FUN_0802a894(void)
// entry 0x802a894


undefined4 FUN_0802a894(int param_1)

{
  ushort *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  short sVar6;
  uint uVar7;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x18) != '\0') &&
     (iVar4 = FUN_08000a70(0x10), uVar3 = DAT_0802a900, iVar2 = DAT_0802a8fc, puVar1 = DAT_0802a8f8,
     iVar4 != 0)) {
    uVar5 = 0;
    do {
      sVar6 = (short)uVar5;
      *(short *)(sVar6 * 2 + iVar4) =
           (short)uVar3 + sVar6 + *(short *)((uint)*(byte *)(param_1 + 0x19) * 2 + iVar2);
      uVar7 = (int)sVar6 + 1;
      uVar5 = uVar7 & 0xffff;
    } while ((int)(uVar7 * 0x10000) >> 0x10 < 8);
    FUN_08001f1c(iVar4,(*puVar1 & 0x1f00) * 8 + DAT_0802a904,0x10);
  }
  return in_lr;
}


