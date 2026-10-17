// undefined FUN_0810e608(void)
// entry 0x810e608


undefined4 FUN_0810e608(uint param_1,short param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar2 = DAT_0810e63c;
  iVar3 = ((param_1 & 0xffff) >> 8) * 4;
  uVar1 = *(ushort *)((param_1 & 0xff) * 2 + *(int *)(iVar3 + DAT_0810e644));
  iVar3 = *(int *)(iVar3 + DAT_0810e640);
  if (param_2 == 0) {
    FUN_08002b10(6);
  }
  else {
    FUN_08002b10(4);
  }
  *(uint *)(iVar2 + 0x18) = iVar3 + (uint)uVar1;
  *(undefined4 *)(iVar2 + 8) = 0;
  FUN_0810e66c(iVar2);
  FUN_0810e690(iVar2);
  *(undefined4 *)(iVar2 + 0xc) = 3;
  return in_lr;
}


