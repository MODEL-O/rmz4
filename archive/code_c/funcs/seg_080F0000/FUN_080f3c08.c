// undefined FUN_080f3c08(void)
// entry 0x80f3c08


undefined8 FUN_080f3c08(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  iVar2 = DAT_080f3c74;
  if (*(short *)(DAT_080f3c74 + 10) == 0) {
    *(undefined2 *)(DAT_080f3c74 + 10) = 0x8000;
  }
  iVar3 = DAT_080f3c78;
  if ((*(ushort *)(DAT_080f3c78 + 6) & 0x80) != 0) {
    FUN_08002b10(1);
    *(ushort *)(iVar2 + 10) = *(short *)(iVar2 + 10) + 1U & 1 | (ushort)DAT_080f3c7c;
  }
  if ((*(ushort *)(iVar3 + 6) & 0x40) != 0) {
    FUN_08002b10(1);
    *(ushort *)(iVar2 + 10) = *(short *)(iVar2 + 10) + 1U & 1 | (ushort)DAT_080f3c7c;
  }
  uVar1 = *(ushort *)(iVar3 + 4);
  if ((uVar1 & 2) == 0) {
    if ((uVar1 & 1) == 0) {
      uVar4 = 0;
    }
    else {
      FUN_08002b10(2);
      if (*(char *)(iVar2 + 10) == '\0') {
        uVar4 = 1;
      }
      else {
        uVar4 = 0xffffffff;
      }
    }
  }
  else {
    FUN_08002b10(3);
    uVar4 = 0xfffffffe;
  }
  return CONCAT44(in_lr,uVar4);
}


