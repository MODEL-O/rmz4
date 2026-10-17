// undefined FUN_08080328(void)
// entry 0x8080328


undefined4 FUN_08080328(int param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  undefined4 in_lr;
  undefined4 local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar4 = *(int *)(param_1 + 0x5c) * 0xfa;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar4 >> 8;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    FUN_080806b0(param_1);
    cVar1 = FUN_08129198(*(undefined1 *)(param_1 + 0x12),6);
    if ((cVar1 == '\0') && (0x280 < *(int *)(param_1 + 0x5c) + 0x140U)) {
      FUN_080d0c88(3,param_1 + 0x54);
    }
    bVar3 = *(byte *)(param_1 + 0x12);
    if ((bVar3 & 2) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(byte *)(param_1 + 0x12) = bVar3 - 1;
    if (bVar3 == 0) {
      *(undefined1 *)(param_1 + 0x12) = 1;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar4 = *(int *)(param_1 + 0x5c) * 0xfa;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar4 >> 8;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x20;
    FUN_080806b0(param_1);
    if ((*(byte *)(param_1 + 0x12) & 2) == 0) {
      bVar3 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar3;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      local_14 = *(undefined4 *)(param_1 + 0x54);
      local_10 = *(int *)(param_1 + 0x58) + DAT_08080478;
      FUN_080d0c88(1,&local_14);
      iVar4 = param_1 + 0x54;
      FUN_080d67cc(param_1,iVar4);
      FUN_08002b10(0x2a);
      FUN_0802ab88(3,0xd,iVar4);
      if (*(ushort *)(DAT_0808047c + 0xc) <= DAT_08080480) {
        *(ushort *)(DAT_0808047c + 0xc) = *(ushort *)(DAT_0808047c + 0xc) + 1;
      }
      FUN_0802abe0(param_1,iVar4);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08080484);
      *(undefined4 *)(param_1 + 0xc) = 4;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar5 + 0x10);
    }
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


