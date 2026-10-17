// undefined FUN_08098c8c(void)
// entry 0x8098c8c


undefined4 FUN_08098c8c(int param_1)

{
  char cVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,DAT_08098d38);
    FUN_080dd574(param_1 + 0x54,7,*(undefined1 *)(param_1 + 0xbc),*(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if ((cVar1 == -1) || (sVar2 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54)), sVar2 != 0)) {
    iVar4 = param_1 + 0x54;
    FUN_080d0c88(2,iVar4);
    FUN_08002b10(0x2a);
    FUN_0802ab88(3,0x24,iVar4);
    if (*(ushort *)(DAT_08098d3c + 0xc) <= DAT_08098d40) {
      *(ushort *)(DAT_08098d3c + 0xc) = *(ushort *)(DAT_08098d3c + 0xc) + 1;
    }
    FUN_0802abe0(param_1,iVar4);
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08098d44);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0x10);
  }
  return in_lr;
}


