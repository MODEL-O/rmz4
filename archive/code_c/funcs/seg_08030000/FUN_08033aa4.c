// undefined FUN_08033aa4(void)
// entry 0x8033aa4


undefined4 FUN_08033aa4(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  char *pcVar3;
  undefined4 in_lr;
  char local_10 [4];
  
  pcVar3 = (char *)(param_1 + 0x102);
  if (*pcVar3 == '\0') {
    FUN_0801cf00(param_1,0x1000);
    FUN_0803c464(param_1,2);
    *pcVar3 = *pcVar3 + '\x01';
  }
  else {
    cVar1 = FUN_08039fd8(param_1,local_10);
    if ((cVar1 != '\0') && (local_10[0] == '\x01')) {
      *(char *)(param_1 + 0x146) = *(char *)(param_1 + 0x146) + '\x01';
    }
    FUN_0803a3b0(param_1,0x1000);
  }
  cVar1 = FUN_0803a68c(param_1);
  if ((((cVar1 == '\0') || (*(char *)(param_1 + 0x71) < '\x06')) || (*(byte *)(param_1 + 0x146) < 2)
      ) || (((*(uint *)(param_1 + 600) & 0x40) == 0 || ((*(ushort *)(param_1 + 200) & 0x40) == 0))))
  {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined1 *)(param_1 + 0x100) = 0;
      uVar2 = FUN_0802b7d8(param_1);
      FUN_0801cf00(param_1,uVar2);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 5;
    *(undefined1 *)(param_1 + 0x101) = 5;
    *(undefined1 *)(param_1 + 0x102) = 0;
  }
  return in_lr;
}


