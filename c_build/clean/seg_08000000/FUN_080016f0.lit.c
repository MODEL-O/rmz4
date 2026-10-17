// undefined FUN_080016f0(void)
// entry 0x80016f0


undefined4 FUN_080016f0(byte param_1,undefined4 param_2,uint param_3)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  pcVar1 = 0x02000790;
  if (param_1 < 6) {
    if ((((*(char *)0x02000790) == '\0') && (iVar2 = FUN_08001594(param_1,param_3), iVar2 != 0)) &&
       (param_3 < 0x299)) {
      pcVar1[1] = param_1;
      *(undefined4 *)(pcVar1 + 8) = param_2;
      *(uint *)(pcVar1 + 0x14) = param_3;
      pcVar1[0x1e] = '\0';
      pcVar1[0x1f] = '\0';
      *pcVar1 = '\x01';
      pcVar1[2] = '\x02';
      pcVar1[3] = '\0';
      uVar3 = 0;
      goto LAB_0800173c;
    }
  }
  uVar3 = 0xffffffff;
LAB_0800173c:
  return uVar3;
}


