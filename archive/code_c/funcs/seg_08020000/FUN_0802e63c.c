// undefined FUN_0802e63c(void)
// entry 0x802e63c


undefined4 FUN_0802e63c(int param_1,uint param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined4 in_lr;
  
  iVar3 = (param_2 & 0xffff) * 0x18 + DAT_0802e68c;
  uVar1 = *(ushort *)(iVar3 + 0x1d4);
  uVar5 = 0;
  puVar6 = (undefined1 *)(DAT_0802e694 + param_1);
  while( true ) {
    puVar2 = (ushort *)(param_1 + 0x198 + uVar5 * 2);
    uVar4 = (uint)*puVar2;
    if (uVar4 == DAT_0802e690) {
      *puVar2 = uVar1;
      if ((*(ushort *)(iVar3 + 0x1d6) & 0x200) != 0) {
        *puVar6 = 1;
      }
      return in_lr;
    }
    if (uVar4 == uVar1) break;
    uVar5 = uVar5 + 1;
    if (0xf < uVar5) {
      return in_lr;
    }
  }
  return in_lr;
}


