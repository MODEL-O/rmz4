// undefined FUN_0810e790(void)
// entry 0x810e790


undefined4 FUN_0810e790(int param_1,uint param_2)

{
  int iVar1;
  ushort *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  
  piVar3 = DAT_0810e800;
  puVar2 = DAT_0810e7fc;
  iVar1 = DAT_0810e7f8;
  FUN_08001ea4(DAT_0810e7f8,(*DAT_0810e7fc & 0xc) * 0x1000 + DAT_0810e800[1]);
  if ((*(char *)(param_1 + 4) != '\x01') && ((param_2 & 0xff) != 0)) {
    iVar4 = (param_2 & 0xff) * 0x14;
    FUN_08001ea4(iVar4 + iVar1,(*puVar2 & 0xc) * 0x1000 + *piVar3);
    FUN_08002208(iVar4 + DAT_0810e804,0x20);
  }
  return in_lr;
}


