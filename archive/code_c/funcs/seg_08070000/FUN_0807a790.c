// undefined FUN_0807a790(void)
// entry 0x807a790


undefined4 FUN_0807a790(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  iVar3 = DAT_0807a860;
  iVar2 = DAT_0807a85c;
  iVar1 = DAT_0807a858;
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_08001d30(DAT_0807a858 + DAT_0807a85c,
                 ((uint)*(ushort *)(DAT_0807a860 + 0x1ac) -
                 (uint)(*(ushort *)(DAT_0807a858 + DAT_0807a85c + 6) >> 6)) * 0x20 + 0x10000);
    FUN_08002208(iVar1 + DAT_0807a864,
                 ((uint)*(ushort *)(DAT_0807a868 + 0x1ac) -
                 (uint)*(byte *)(iVar1 + DAT_0807a864 + 7)) * 0x20 + 0x200);
    iVar1 = DAT_0807a86c;
    FUN_08001d30(iVar2 + DAT_0807a86c,
                 ((uint)*(ushort *)(iVar3 + 0x1a8) -
                 (uint)(*(ushort *)(iVar2 + DAT_0807a86c + 6) >> 6)) * 0x20 + 0x10000);
    FUN_08002208(iVar1 + DAT_0807a864,
                 ((uint)*DAT_0807a870 - (uint)*(byte *)(iVar1 + DAT_0807a864 + 7)) * 0x20 + 0x200);
    FUN_08002b10(DAT_0807a874);
    *(undefined1 *)(param_1 + 0xd8) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0xd8) == '\0') {
    if (*(byte *)(param_1 + 0xf) < 5) {
                    /* WARNING: Could not recover jumptable at 0x0807a888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(PTR_PTR_0807a88c + (uint)*(byte *)(param_1 + 0xf) * 4))();
      return uVar4;
    }
  }
  else {
    FUN_08002b10(0x154);
    *(undefined1 *)(param_1 + 0xd) = 8;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


