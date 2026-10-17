// undefined FUN_08001ea4(void)
// entry 0x8001ea4


undefined4 FUN_08001ea4(uint param_1,uint param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  puVar1 = 0x020007c0;
  uVar4 = 0;
  if ((*(uint *)0x020007c0) != 0) {
    puVar5 = 0x020007c0 + 2;
    puVar3 = 0x020007c0;
    do {
      puVar3 = puVar3 + 3;
      if ((*puVar3 == param_1) && (*puVar5 == param_2)) goto LAB_08001f14;
      puVar5 = puVar5 + 3;
      uVar4 = uVar4 + 1;
    } while (uVar4 < (*(uint *)0x020007c0));
  }
  if ((*(uint *)0x020007c0) < 0x10) {
    ((uint *)0x020007c0)[uVar4 * 3 + 2] = param_2;
    *(byte *)(puVar1 + uVar4 * 3 + 1) = (byte)puVar1[uVar4 * 3 + 1] & 0xfc;
    puVar1[uVar4 * 3 + 3] = param_1;
    *puVar1 = *puVar1 + 1;
LAB_08001f14:
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


