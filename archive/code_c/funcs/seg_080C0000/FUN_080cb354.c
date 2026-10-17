// undefined FUN_080cb354(void)
// entry 0x80cb354


undefined4 FUN_080cb354(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  int local_10;
  undefined4 local_c;
  
  FUN_0801cff0();
  if ((*(char *)(param_1 + 0xd) == '\0') &&
     (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == -1)) {
    if (*(char *)(param_1 + 0x11) == '\0') {
      local_10 = *(int *)(param_1 + 0x54);
      iVar3 = DAT_080cb3f4;
    }
    else {
      local_10 = *(int *)(param_1 + 0x54);
      iVar3 = 0xc00;
    }
    local_10 = local_10 + iVar3;
    local_c = *(undefined4 *)(param_1 + 0x58);
    if (*(byte *)(param_1 + 0x13) < 0x12) {
      FUN_080cb0bc(&local_10,0,*(undefined1 *)(param_1 + 0x11),*(byte *)(param_1 + 0x13) + 1);
    }
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  FUN_08005784(param_1 + 0x74,
               (uint)*(byte *)(*(char *)(param_1 + 0x71) + DAT_080cb3f8) * 0x18 + DAT_080cb3fc);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080cb400);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    FUN_080cb178(param_1);
  }
  return in_lr;
}


