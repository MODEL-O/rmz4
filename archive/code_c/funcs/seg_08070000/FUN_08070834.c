// undefined FUN_08070834(void)
// entry 0x8070834


undefined4 FUN_08070834(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10);
  *(undefined1 *)(*(int *)(param_1 + 0xb4) + 0xb4) = 1;
  uVar2 = FUN_08073e00(param_1);
  *(undefined1 *)(param_1 + 0xc3) = uVar2;
  if (*(int *)(param_1 + 0x54) < *(int *)(*DAT_08070870 + 0x54) == (bool)(bVar1 >> 4 & 1)) {
    cVar3 = '\x03';
  }
  else {
    cVar3 = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(char *)(param_1 + 0xe) = cVar3;
  *(undefined1 *)(param_1 + 0xf) = 0;
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_08070894));
  return in_lr;
}


