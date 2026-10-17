// undefined FUN_08080488(void)
// entry 0x8080488


undefined4 FUN_08080488(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_lr;
  undefined4 local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar3 = *(int *)(param_1 + 0x5c) * 0xfa;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar3 >> 8;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    FUN_080806b0(param_1);
    if ((*(byte *)(param_1 + 0x12) & 2) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar1;
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == -1) {
      FUN_0801cf00(param_1,DAT_080804f8);
      *(undefined1 *)(param_1 + 0x12) = 0x18;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar3 = *(int *)(param_1 + 0x5c) * 0xfa;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar3 >> 8;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x20;
    FUN_080806b0(param_1);
    if ((*(byte *)(param_1 + 0x12) & 2) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar1;
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == -1) {
      local_14 = *(undefined4 *)(param_1 + 0x54);
      local_10 = *(int *)(param_1 + 0x58) + DAT_080805bc;
      FUN_080d0c88(1,&local_14);
      iVar3 = param_1 + 0x54;
      FUN_080d67cc(param_1,iVar3);
      FUN_08002b10(0x2a);
      FUN_0802ab88(3,0xd,iVar3);
      if (*(ushort *)(DAT_080805c0 + 0xc) <= DAT_080805c4) {
        *(ushort *)(DAT_080805c0 + 0xc) = *(ushort *)(DAT_080805c0 + 0xc) + 1;
      }
      FUN_0802abe0(param_1,iVar3);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080805c8);
      *(undefined4 *)(param_1 + 0xc) = 4;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 0x10);
    }
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


