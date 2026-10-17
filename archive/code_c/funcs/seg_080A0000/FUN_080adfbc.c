// undefined FUN_080adfbc(void)
// entry 0x80adfbc


undefined4 FUN_080adfbc(int param_1)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    local_18 = *(int *)(param_1 + 0x54) + DAT_080adff4;
    uVar2 = *DAT_080adff8 * DAT_080adffc + DAT_080ae000;
    *DAT_080adff8 = uVar2 & 0x7fffffff;
    uVar2 = (uVar2 & 0x7fffffff) >> 0x10 & 1;
    *(char *)(param_1 + 0xe) = (char)uVar2;
    if (uVar2 == 0) {
      local_14 = *(int *)(param_1 + 0x58);
      iVar4 = 0x300;
    }
    else {
      local_14 = *(int *)(param_1 + 0x58);
      iVar4 = DAT_080ae004;
    }
    local_14 = local_14 + iVar4;
    FUN_080d0c88(1,&local_18);
    *(undefined1 *)(param_1 + 0x12) = 4;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  FUN_0801cff0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    local_10 = *(int *)(param_1 + 0x54) + 0xa00;
    if (*(char *)(param_1 + 0xe) == '\0') {
      local_c = *(int *)(param_1 + 0x58);
      iVar4 = DAT_080ae08c;
    }
    else {
      local_c = *(int *)(param_1 + 0x58);
      iVar4 = 0x300;
    }
    local_c = local_c + iVar4;
    FUN_080d0c88(1);
    FUN_08002b10(0x35);
    FUN_0802ab88(0,0xff,param_1 + 0x54);
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ae090);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0x10);
  }
  return in_lr;
}


