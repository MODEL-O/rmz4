// undefined FUN_080167a4(void)
// entry 0x80167a4


undefined4 FUN_080167a4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_08002b10(0x74);
    iVar1 = DAT_08016814;
    uVar2 = FUN_080f83fc(DAT_08016814,0,0);
    *(undefined4 *)(param_1 + 0x68) = uVar2;
    uVar2 = FUN_080f83fc(iVar1 + 8,0,0);
    *(undefined4 *)(param_1 + 0x6c) = uVar2;
    uVar2 = FUN_080f83fc(iVar1 + 0x10,0,0);
    *(undefined4 *)(param_1 + 0x70) = uVar2;
    uVar2 = FUN_080f5308(iVar1 + 0x18,2,0);
    *(undefined4 *)(param_1 + 0x74) = uVar2;
    uVar2 = FUN_080f5308(iVar1 + 0x20,2,0);
    *(undefined4 *)(param_1 + 0x78) = uVar2;
    uVar2 = FUN_080f5308(iVar1 + 0x28,2,0);
    *(undefined4 *)(param_1 + 0x7c) = uVar2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}


