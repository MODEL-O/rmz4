// undefined FUN_08031fec(void)
// entry 0x8031fec


undefined4 FUN_08031fec(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0x156);
  if (cVar1 == '\x03') {
    if ((*(char *)(param_1 + 0x71) == '\0') && ('\x01' < *(char *)(param_1 + 0x72))) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar2 = *(int *)(param_1 + 0x1c4) + 0x200;
      }
      else {
        iVar2 = *(int *)(param_1 + 0x1c4) + DAT_08032034;
      }
    }
    else {
      iVar2 = *(int *)(param_1 + 0x1c4);
    }
    *(int *)(param_1 + 0x54) = iVar2;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x1c8) + 0x2d00;
  }
  else {
    iVar2 = 1;
    if ((cVar1 != '\0') && (iVar2 = 0, cVar1 == '\x01')) {
      iVar2 = 2;
    }
    if (*(char *)(param_1 + 0x72) < '\x02') {
      iVar2 = iVar2 + 1;
    }
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar3 = *(int *)(param_1 + 0x1c4) +
              *(int *)((*(char *)(param_1 + 0x71) + iVar2) * 4 + DAT_08032138);
    }
    else {
      iVar3 = *(int *)(param_1 + 0x1c4) -
              *(int *)((*(char *)(param_1 + 0x71) + iVar2) * 4 + DAT_080320ac);
    }
    *(int *)(param_1 + 0x54) = iVar3;
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x1c8) +
         *(int *)((*(char *)(param_1 + 0x71) + iVar2) * 4 + DAT_0803213c);
  }
  iVar2 = DAT_08032140;
  iVar3 = *(int *)(param_1 + 0x54);
  iVar4 = *(int *)(param_1 + 0x58);
  FUN_0802b7f0(param_1,(uint)*(byte *)(param_1 + 0x174) * 8 + DAT_08032140,0);
  FUN_0802b7f0(param_1,(uint)*(byte *)(param_1 + 0x174) * 8 + iVar2,1);
  if ((*(int *)(param_1 + 0x54) == iVar3) && (*(int *)(param_1 + 0x58) == iVar4)) {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined1 *)(param_1 + 0xe) = 2;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 2;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


