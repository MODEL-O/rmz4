// undefined FUN_08033974(void)
// entry 0x8033974


undefined4 FUN_08033974(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  char *pcVar3;
  undefined4 in_lr;
  char local_10 [4];
  
  pcVar3 = (char *)(param_1 + 0x102);
  if (*pcVar3 == '\0') {
    FUN_0801cf00(param_1,0xf00);
    FUN_0803c464(param_1,1);
    *pcVar3 = *pcVar3 + '\x01';
  }
  else {
    cVar1 = FUN_08039fd8(param_1,local_10);
    if ((cVar1 != '\0') && (local_10[0] == '\x01')) {
      *(char *)(param_1 + 0x146) = *(char *)(param_1 + 0x146) + '\x01';
    }
    FUN_0803a3b0(param_1,0xf00);
  }
  if (('\x03' < *(char *)(param_1 + 0x71)) && (1 < *(byte *)(param_1 + 0x146))) {
    if (((*(uint *)(param_1 + 600) & 0x40) == 0) || (cVar1 = FUN_0803a68c(param_1), cVar1 == '\0'))
    {
      if (((*(uint *)(param_1 + 600) & 0x80) == 0) || (cVar1 = FUN_0803a6b4(param_1), cVar1 == '\0')
         ) {
        *(undefined1 *)(param_1 + DAT_08033aa0) = 3;
        *(undefined1 *)(param_1 + 0x102) = 0;
        FUN_08033aa4(param_1);
      }
      else {
        *(undefined1 *)(param_1 + DAT_08033a54) = 6;
        *(undefined1 *)(param_1 + 0x102) = 0;
        FUN_08033ca0(param_1);
      }
    }
    else {
      *(undefined1 *)(param_1 + DAT_08033a20) = 5;
      *(undefined1 *)(param_1 + 0x102) = 0;
      FUN_08033c2c(param_1);
    }
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0x100) = 0;
    uVar2 = FUN_0802b7d8(param_1);
    FUN_0801cf00(param_1,uVar2);
  }
  return in_lr;
}


