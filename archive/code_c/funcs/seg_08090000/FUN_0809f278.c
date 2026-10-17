// undefined FUN_0809f278(void)
// entry 0x809f278


undefined4 FUN_0809f278(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_0809f2d4);
    *(undefined1 *)(param_1 + 0x12) = 0x14;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(char *)(param_1 + 0x73) == '\x03') ||
     (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == -1)) {
    if (*(char *)(param_1 + 0xe) == '\x01') {
      FUN_0801cf00(param_1,DAT_0809f2d8);
      *(undefined1 *)(param_1 + 0x12) = 0xff;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      if (*(char *)(param_1 + 0x10) == '\0') {
        local_10 = *(int *)(param_1 + 0x54);
        iVar2 = DAT_0809f30c;
      }
      else {
        local_10 = *(int *)(param_1 + 0x54);
        iVar2 = 0x2000;
      }
      local_10 = local_10 + iVar2;
      local_c = *(int *)(param_1 + 0x58) + 0x400;
      FUN_080c9bc0(&local_10,0,0,*(byte *)(param_1 + 10) >> 4 & 1);
      FUN_08002b10(0x138);
    }
    else if (*(char *)(param_1 + 0xe) == '\x02') {
      *(undefined1 *)(param_1 + 0xd) = 0;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0x12) = 0xc4;
    }
  }
  return in_lr;
}


