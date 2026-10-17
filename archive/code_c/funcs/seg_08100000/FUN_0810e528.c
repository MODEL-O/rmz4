// undefined FUN_0810e528(void)
// entry 0x810e528


undefined4 FUN_0810e528(uint param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar1 = DAT_0810e56c;
  iVar3 = ((param_1 & 0xffff) >> 8) * 4;
  *(uint *)(DAT_0810e56c + 0x18) =
       *(int *)(iVar3 + DAT_0810e570) +
       (uint)*(ushort *)((param_1 & 0xff) * 2 + *(int *)(iVar3 + DAT_0810e574));
  *(uint *)(iVar1 + 8) = param_2 & 0xffff;
  FUN_0810e66c(iVar1);
  FUN_0810e690(iVar1);
  if (*(char *)(iVar1 + 4) == '\0') {
    uVar2 = 2;
  }
  else {
    uVar2 = 1;
  }
  *(undefined4 *)(iVar1 + 0xc) = uVar2;
  return in_lr;
}


