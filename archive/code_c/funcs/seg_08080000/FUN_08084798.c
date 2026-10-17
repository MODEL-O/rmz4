// undefined FUN_08084798(void)
// entry 0x8084798


undefined4 FUN_08084798(int param_1)

{
  char cVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,DAT_08084800);
    FUN_080d6e54(param_1 + 0x54,*(byte *)(param_1 + 10) >> 4 & 1,0);
    *(undefined1 *)(param_1 + 0x12) = 0x30;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    iVar4 = param_1 + 0x54;
    bVar3 = *(byte *)(param_1 + 0xbc);
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      bVar3 = bVar3 | 0x10;
    }
    FUN_080d4c8c(iVar4,DAT_08084804,0,bVar3);
    bVar3 = *(byte *)(param_1 + 0xbc);
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      bVar3 = bVar3 | 0x10;
    }
    FUN_080d4c8c(iVar4,DAT_0808482c,0,bVar3);
    FUN_080d0c88(1,iVar4);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      FUN_080d0c88(2,iVar4);
    }
    else {
      FUN_080d0c88(2,iVar4);
    }
    FUN_0802ab88(4,0x12,iVar4);
    FUN_08002b10(0x2a);
    if (*(ushort *)(DAT_080848a4 + 0xc) <= DAT_080848a8) {
      *(ushort *)(DAT_080848a4 + 0xc) = *(ushort *)(DAT_080848a4 + 0xc) + 1;
    }
    FUN_0802abe0(param_1,iVar4);
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080848ac);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0x10);
  }
  return in_lr;
}


