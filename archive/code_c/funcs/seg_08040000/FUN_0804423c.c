// undefined FUN_0804423c(void)
// entry 0x804423c


undefined4 FUN_0804423c(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  FUN_0801cff0();
  cVar1 = FUN_0803a99c(param_1,0xff);
  if (*(char *)(iVar3 + 0xfa) == '\x02') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08044294);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
  }
  else if ((cVar1 == '\0') && ((*(uint *)(param_1 + 0x8c) & 4) == 0)) {
    if (*(char *)(param_1 + 0x12) == '\0') {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    }
    else {
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      if (cVar1 == '\0') {
        cVar1 = FUN_0803ad84(param_1,0);
        iVar3 = DAT_08044340;
        if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          if (0x50 < (byte)(cVar1 + 0xa8U)) {
            cVar1 = -0x80;
          }
        }
        else if ((byte)(cVar1 - 0x29U) < 0xaf) {
          cVar1 = '\0';
        }
        *(int *)(param_1 + 0x5c) =
             *(short *)((uint)(byte)(cVar1 - 0x40) * 2 + DAT_08044340) * -0x300 >> 8;
        *(int *)(param_1 + 0x60) = *(short *)((uint)(byte)(cVar1 + 0x80) * 2 + iVar3) * -0x300 >> 8;
      }
    }
  }
  else {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080442c0);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
  }
  return in_lr;
}


