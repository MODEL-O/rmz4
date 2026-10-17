// undefined FUN_0803d6d0(void)
// entry 0x803d6d0


undefined4 FUN_0803d6d0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x14) & 0x40) != 0) &&
      (iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c), *(char *)(iVar4 + 8) == '\x04')) &&
     (*(char *)(iVar4 + 9) == '\0')) {
    iVar5 = *(int *)(param_1 + 0x2c);
    iVar3 = *(int *)(iVar5 + 0xb4);
    if (*(char *)(iVar3 + 0xc3) == '\x03') {
      *(undefined1 *)(iVar5 + 0xc3) = 2;
    }
    if (*(char *)(iVar3 + 0xc3) == '\x02') {
      *(undefined1 *)(iVar5 + 0xc4) = 1;
    }
    cVar1 = FUN_0803aadc(iVar3);
    if (cVar1 != '\0') {
      *(undefined1 *)(iVar5 + 0xc4) = 1;
    }
    uVar2 = *(undefined4 *)(iVar4 + 0x58);
    *(undefined4 *)(iVar5 + 100) = *(undefined4 *)(iVar4 + 0x54);
    *(undefined4 *)(iVar5 + 0x68) = uVar2;
    *(char *)(iVar5 + 0xc1) = *(char *)(iVar5 + 0xc1) + '\x01';
  }
  return in_lr;
}


