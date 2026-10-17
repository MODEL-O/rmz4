// undefined FUN_0803c37c(void)
// entry 0x803c37c


undefined4 FUN_0803c37c(int param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 4) != 0) {
    iVar3 = *(int *)(param_1 + 0x2c);
    iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
    if (*(ushort *)(DAT_0803c3f8 + 0x1c) <= DAT_0803c3fc) {
      *(ushort *)(DAT_0803c3f8 + 0x1c) = *(ushort *)(DAT_0803c3f8 + 0x1c) + 1;
    }
    cVar1 = *(char *)(iVar3 + 0x10);
    if (((cVar1 == '\x03') && (*(char *)(iVar3 + 0xd) == '\x01')) &&
       ((cVar2 = *(char *)(iVar4 + 8), cVar2 == '\x02' ||
        ((cVar2 == '\x03' && ((cVar2 = *(char *)(iVar4 + 9), cVar2 == '9' || (cVar2 == 'D')))))))) {
      *(undefined1 *)(iVar3 + 0x12) = 0x3c;
    }
    if (((((*(uint *)(*(int *)(param_1 + 0xc) + 0x18) & 0x200) == 0) || (cVar1 == '\0')) &&
        (cVar1 != '\x03')) && ((cVar1 != '\x06' && (cVar1 != '\x04')))) {
      *(undefined1 *)(iVar3 + 0xc0) = 1;
    }
  }
  return in_lr;
}


